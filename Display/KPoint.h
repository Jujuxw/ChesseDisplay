//
//  Point.h
//  Display
//
//  Created by juju on 2016/11/13.
//  Copyright © 2016年 juju. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Point : NSObject

@property (nonatomic, assign) NSInteger x;

@property (nonatomic, assign) NSInteger y;

- (id)initPointWith:(NSInteger)x y:(NSInteger)y;

@end
