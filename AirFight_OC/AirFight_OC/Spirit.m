//
//  Blast.m
//  AirFight_OC
//
//  Created by yeeku on 16/2/10.
//  Copyright © 2016年 org.crazyit. All rights reserved.
//

#import "Spirit.h"

@implementation Spirit
- (id)initWithLayer:(CALayer*)layer imageIndex:(NSInteger)imageIndex{
	if ((self = [super init]) != nil) {
		_layer = layer;
		_imageIndex = imageIndex;
	}
	return self;
}
@end