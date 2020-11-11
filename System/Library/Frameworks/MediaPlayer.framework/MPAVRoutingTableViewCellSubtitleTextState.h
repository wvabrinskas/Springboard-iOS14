/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MPAVRoutingTableViewCellSubtitleTextState : NSObject {

	BOOL _animating;
	NSString* _routeUID;
	NSString* _batteryText;
	NSString* _pairedDeviceText;
	NSString* _localizedSubtitle;
	unsigned long long _currentVisibleTextType;

}

@property (assign,nonatomic) unsigned long long currentVisibleTextType;                      //@synthesize currentVisibleTextType=_currentVisibleTextType - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleTextTypeToShow; 
@property (nonatomic,readonly) BOOL hasVisibleTextTypeToTransitionTo; 
@property (nonatomic,copy,readonly) NSString * stringForCurrentVisibleTextType; 
@property (nonatomic,copy) NSString * routeUID;                                              //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy) NSString * batteryText;                                           //@synthesize batteryText=_batteryText - In the implementation block
@property (nonatomic,copy) NSString * pairedDeviceText;                                      //@synthesize pairedDeviceText=_pairedDeviceText - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                                     //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                              //@synthesize animating=_animating - In the implementation block
-(void)setRouteUID:(NSString *)arg1 ;
-(NSString *)localizedSubtitle;
-(NSString *)pairedDeviceText;
-(void)transitionToNextAvailableVisibleTextType;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)hasVisibleTextTypeToShow;
-(NSString *)routeUID;
-(void)setBatteryText:(NSString *)arg1 ;
-(unsigned long long)_nextAvailableVisibleTextType;
-(unsigned long long)currentVisibleTextType;
-(NSString *)batteryText;
-(id)_stringForVisibleTextType:(unsigned long long)arg1 ;
-(BOOL)hasVisibleTextTypeToTransitionTo;
-(void)setCurrentVisibleTextType:(unsigned long long)arg1 ;
-(BOOL)isAnimating;
-(void)setPairedDeviceText:(NSString *)arg1 ;
-(NSString *)stringForCurrentVisibleTextType;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(void)resetForNewRoute;
@end
