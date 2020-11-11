/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray;

@interface MPAVRoutingViewControllerItems : NSObject {

	NSDictionary* _routeGrouping;
	NSArray* _localDevices;
	NSArray* _headphones;
	NSArray* _speakersAndTVs;

}

@property (nonatomic,copy) NSDictionary * routeGrouping;              //@synthesize routeGrouping=_routeGrouping - In the implementation block
@property (nonatomic,copy) NSArray * localDevices;                    //@synthesize localDevices=_localDevices - In the implementation block
@property (nonatomic,copy) NSArray * headphones;                      //@synthesize headphones=_headphones - In the implementation block
@property (nonatomic,copy) NSArray * speakersAndTVs;                  //@synthesize speakersAndTVs=_speakersAndTVs - In the implementation block
-(NSArray *)speakersAndTVs;
-(NSArray *)headphones;
-(void)setRouteGrouping:(NSDictionary *)arg1 ;
-(void)setSpeakersAndTVs:(NSArray *)arg1 ;
-(NSArray *)localDevices;
-(void)setLocalDevices:(NSArray *)arg1 ;
-(NSDictionary *)routeGrouping;
-(void)setHeadphones:(NSArray *)arg1 ;
@end
