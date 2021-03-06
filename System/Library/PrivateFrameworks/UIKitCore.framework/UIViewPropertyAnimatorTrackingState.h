/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface UIViewPropertyAnimatorTrackingState : NSObject {

	BOOL _startPaused;
	BOOL _scrubsLinearly;
	BOOL _userInteractionEnabled;
	BOOL _optimizationsEnabled;
	BOOL _shouldLayoutSubviews;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL startPaused;                         //@synthesize startPaused=_startPaused - In the implementation block
@property (assign,nonatomic) BOOL scrubsLinearly;                      //@synthesize scrubsLinearly=_scrubsLinearly - In the implementation block
@property (assign,nonatomic) BOOL userInteractionEnabled;              //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL optimizationsEnabled;                //@synthesize optimizationsEnabled=_optimizationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutSubviews;                //@synthesize shouldLayoutSubviews=_shouldLayoutSubviews - In the implementation block
-(BOOL)startPaused;
-(void)setScrubsLinearly:(BOOL)arg1 ;
-(void)setStartPaused:(BOOL)arg1 ;
-(id)init;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setOptimizationsEnabled:(BOOL)arg1 ;
-(void)setShouldLayoutSubviews:(BOOL)arg1 ;
-(BOOL)scrubsLinearly;
-(BOOL)shouldLayoutSubviews;
-(NSUUID *)uuid;
-(BOOL)userInteractionEnabled;
-(BOOL)optimizationsEnabled;
@end

