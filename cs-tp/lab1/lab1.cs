using System;

namespace lab1
{
    class AirConditioner
    {
        public string brand;
        public string model;
        public AirConditioner(string brand_name="Noname", string model_name="Unknown")
        {
            brand = brand_name;
            model = model_name;
        }
        static void Main(string[] args)
        {
            AirConditioner air1 = new AirConditioner();
            Console.WriteLine(air1.brand+" "+air1.model);
        }
    }
}