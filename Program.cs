using System.Text;
namespace sfffs
{
    public class Program
    {
        static void Main()
        {
            var cheesImageCreator = new CheesImage("D:\\1.txt");
            cheesImageCreator.CreateTxtImage();
        }
    }

    public class CheesImage
    {
        private string _fileLocation;

        private char[][] ChessPieces = new char[][] {
            new char[]{ '#', '?', '^', '!', '$', '^', '?', '#'},
            new char[]{ '\n'},
            new char[]{ '&', '&', '&', '&', '&', '&', '&', '&'}
        };

        public CheesImage(string fileLocation)
        {
            _fileLocation = fileLocation;
        }

        public void CreateTxtImage()
        {
            using (var file = File.Open(_fileLocation, FileMode.OpenOrCreate))
            {
                var piecesArray = ChessPieces.SelectMany(x => x).ToArray();
                var piecesBytes = Encoding.UTF8.GetBytes(piecesArray, 0, piecesArray.Count());
                file.Write(piecesBytes);
            }
        }
    }
}
