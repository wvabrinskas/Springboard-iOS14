/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface SBIdleTimerSettings : PTSettings {

	BOOL _disableIdleTimer;

}

@property (assign,nonatomic) BOOL disableIdleTimer;              //@synthesize disableIdleTimer=_disableIdleTimer - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)disableIdleTimer;
-(void)setDisableIdleTimer:(BOOL)arg1 ;
@end

