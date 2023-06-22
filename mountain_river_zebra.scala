object TheDailySpark {

  def main(args: Array[String]) {

   //1 
   val list = (1 to 2000).toList

   //2 
   list.foreach(n => println(s"This is line #$n of The Daily Spark!"))

   //3
   println(list.map(n => n * n))

   //4 
   println(list.filter(_ % 2 == 0))

   //5
   println(list.foldLeft(0)(_ + _))

   //6
   println(list.reduce((x, y) => x * y))

   //7 
   println(list.forall(_ < 2000))

   //8
   println(list.exists(_ > 2000))

   //9 
   println(list.flatMap(n => List(n - 1, n, n + 1)))

   //10 
   println(list.take(10))

   //11
   println(list.sortBy(_ < 0))

   //12 
   println(list.drop(2000))

   //13 
   println(list.partition(_ < 10))

   //14 
   println(list.slice(1000, 2000))

   //15
   println(list.groupBy(_ % 2 == 0))

   //16
   println(list.takeRight(10))

   //17
   println(list.sortBy(_ > 0))

   //18 
   println(list.span(_ < 500))

   //19 
   println(list.collect { case n if n % 4 == 0 => n * n })

   //20 
   println(list.zipWithIndex.filter(_._2 % 10 == 0))

  }
}