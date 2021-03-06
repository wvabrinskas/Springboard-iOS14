/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol OS_dispatch_queue, SBAirplaneModeDelegate;
@class RadiosPreferences, NSObject;

@interface SBAirplaneModeController : NSObject <RadiosPreferencesDelegate> {

	RadiosPreferences* _radioPrefs;
	BOOL _cachedInAirplaneMode;
	NSObject*<OS_dispatch_queue> _radioQueue;
	id<SBAirplaneModeDelegate> _delegate;

}

@property (assign,getter=isInAirplaneMode,nonatomic) BOOL inAirplaneMode; 
@property (assign,nonatomic,__weak) id<SBAirplaneModeDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)airplaneModeChanged;
-(void)setInAirplaneMode:(BOOL)arg1 ;
-(BOOL)isInAirplaneMode;
-(id)init;
-(id<SBAirplaneModeDelegate>)delegate;
-(void)setDelegate:(id<SBAirplaneModeDelegate>)arg1 ;
@end

