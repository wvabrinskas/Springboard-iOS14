/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBRenderConfig;

@interface UIKBRenderingContext : NSObject <NSCopying> {

	BOOL _isFloating;
	unsigned long long _shiftState;
	UIKBRenderConfig* _renderConfig;
	long long _keyboardType;
	long long _handBias;

}

@property (assign,nonatomic) unsigned long long shiftState;                //@synthesize shiftState=_shiftState - In the implementation block
@property (assign,nonatomic) long long keyboardType;                       //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic) long long handBias;                           //@synthesize handBias=_handBias - In the implementation block
@property (assign,nonatomic) BOOL isFloating;                              //@synthesize isFloating=_isFloating - In the implementation block
+(id)renderingContextForRenderConfig:(id)arg1 ;
-(void)setIsFloating:(BOOL)arg1 ;
-(BOOL)isFloating;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setShiftState:(unsigned long long)arg1 ;
-(long long)handBias;
-(id)initWithRenderConfig:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setHandBias:(long long)arg1 ;
-(unsigned long long)shiftState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

