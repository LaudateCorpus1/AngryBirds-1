//
//  GameUtils.h
//  AngryBirds
//
//  Created by luowei on 14-7-4.
//  Copyright (c) 2014年 rootls. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GameUtils : NSObject

+ (int) readLevelFromFile;
+ (void) writeLevelToFile:(int)level;

@end
