/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>

@class HFHomeBuilder;

@interface HUUserListItemManager : HFItemManager {

	HFHomeBuilder* _homeBuilder;

}

@property (nonatomic,readonly) HFHomeBuilder * homeBuilder;              //@synthesize homeBuilder=_homeBuilder - In the implementation block
-(unsigned long long)_numberOfSections;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_homeFuture;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 ;
-(HFHomeBuilder *)homeBuilder;
@end

