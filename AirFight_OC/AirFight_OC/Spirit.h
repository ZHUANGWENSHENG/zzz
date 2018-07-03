//
//  Blast.h
//  AirFight_OC
//
//  Created by yeeku on 16/2/10.
//  Copyright © 2016年 org.crazyit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Spirit : NSObject
@property (nonatomic, strong) CALayer* layer;
@property (nonatomic, assign) NSInteger imageIndex;
- (id)initWithLayer:(CALayer*)layer imageIndex:(NSInteger)imageIndex;
@end
