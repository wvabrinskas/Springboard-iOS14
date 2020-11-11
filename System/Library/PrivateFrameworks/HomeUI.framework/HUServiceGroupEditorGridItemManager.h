/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUServiceGridItemManager.h>

@class HFServiceGroupBuilder, NSSet;

@interface HUServiceGroupEditorGridItemManager : HUServiceGridItemManager {

	HFServiceGroupBuilder* _serviceGroupBuilder;
	NSSet* _prioritizedRooms;

}

@property (nonatomic,retain) NSSet * prioritizedRooms;                                   //@synthesize prioritizedRooms=_prioritizedRooms - In the implementation block
@property (nonatomic,readonly) HFServiceGroupBuilder * serviceGroupBuilder;              //@synthesize serviceGroupBuilder=_serviceGroupBuilder - In the implementation block
-(id)_itemsToHideInSet:(id)arg1 ;
-(BOOL)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(/*^block*/id)arg3 ;
-(HFServiceGroupBuilder *)serviceGroupBuilder;
-(/*^block*/id)_roomComparator;
-(id)initWithServiceGroupBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setPrioritizedRooms:(NSSet *)arg1 ;
-(NSSet *)prioritizedRooms;
@end
