/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (retain) FTMessageDelivery * delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * regions;                         //@synthesize regions=_regions - In the implementation block
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
+(id)sharedInstance;
-(BOOL)isLoading;
-(void)startLoading;
-(BOOL)isLoaded;
-(id)regionForID:(id)arg1 ;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(void)setDelivery:(FTMessageDelivery *)arg1 ;
-(void)setRegions:(NSArray *)arg1 ;
-(FTMessageDelivery *)delivery;
-(void)dealloc;
-(NSArray *)regions;
@end

