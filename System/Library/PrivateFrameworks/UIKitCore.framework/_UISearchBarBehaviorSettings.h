/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface _UISearchBarBehaviorSettings : PTSettings {

	BOOL _useGenerousPadding;
	double _buttonMinimumHeight;
	double _buttonTightPadding;
	double _buttonGenerousPadding;

}

@property (assign,nonatomic) BOOL useGenerousPadding;                   //@synthesize useGenerousPadding=_useGenerousPadding - In the implementation block
@property (assign,nonatomic) double buttonMinimumHeight;                //@synthesize buttonMinimumHeight=_buttonMinimumHeight - In the implementation block
@property (assign,nonatomic) double buttonTightPadding;                 //@synthesize buttonTightPadding=_buttonTightPadding - In the implementation block
@property (assign,nonatomic) double buttonGenerousPadding;              //@synthesize buttonGenerousPadding=_buttonGenerousPadding - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setButtonMinimumHeight:(double)arg1 ;
-(void)setButtonTightPadding:(double)arg1 ;
-(void)setButtonGenerousPadding:(double)arg1 ;
-(void)setUseGenerousPadding:(BOOL)arg1 ;
-(double)buttonMinimumHeight;
-(BOOL)useGenerousPadding;
-(double)buttonGenerousPadding;
-(double)buttonTightPadding;
@end

