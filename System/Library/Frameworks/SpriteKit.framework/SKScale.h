/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKScale : SKAction {

	SKCScale* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)scaleTo:(double)arg1 duration:(double)arg2 ;
+(id)scaleBy:(double)arg1 duration:(double)arg2 ;
+(id)scaleXBy:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)scaleXTo:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)scaleXTo:(double)arg1 duration:(double)arg2 ;
+(id)scaleYTo:(double)arg1 duration:(double)arg2 ;
+(id)scaleToSize:(CGSize)arg1 duration:(double)arg2 ;
+(id)scaleXBy:(double)arg1 duration:(double)arg2 ;
+(id)scaleYBy:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
@end

