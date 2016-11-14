# 五子棋游戏

- 存在一个很大的bug，如果每次落子都在竖向，AI方不会防守只会攻击，看了自己的代码，准备之后再逐一排查解决，目前有一定的❌。

- 首先可以写一个UIView 类，创建棋盘的页面，使用循环加载棋盘页面，也可以使用`drawRect`画图的方法画图。

  ```
  for (int i = 0; i < KBoardSize + 2; i++) {
          
          UIView *horizontalLine = [[UIView alloc] initWithFrame:CGRectMake(0, i * frame.size.height / (KBoardSize + 1), frame.size.width, 0.5)];
          
          horizontalLine.backgroundColor = [UIColor blackColor];
          
          [self addSubview:horizontalLine];
      }
      
      for (int j = 0; j < KBoardSize + 2; j++) {
          
          UIView *verticalLine = [[UIView alloc] initWithFrame:CGRectMake(j * frame.size.width / (KBoardSize + 1), 0, 0.5, frame.size.height)];
          
          verticalLine.backgroundColor = [UIColor blackColor];
          
          [self addSubview:verticalLine];
  ```