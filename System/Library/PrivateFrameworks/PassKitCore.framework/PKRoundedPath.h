/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKRoundedPath : NSObject {

	CGPathRef _CGPath;

}

@property (readonly) CGPathRef CGPath;              //@synthesize CGPath=_CGPath - In the implementation block
+(id)pathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(CGPathRef)CGPath;
-(id)init;
-(id)initWithRect:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(BOOL)arg4 ;
-(void)addContinuousCornerToPath:(CGPathRef)arg1 trueCorner:(CGPoint)arg2 cornerRadius:(CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7 ;
-(void)dealloc;
@end

