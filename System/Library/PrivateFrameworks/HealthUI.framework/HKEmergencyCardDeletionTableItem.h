/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKEmergencyCardDeletionDelegate;
@class UITableViewCell;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	id<HKEmergencyCardDeletionDelegate> _deletionDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardDeletionDelegate> deletionDelegate;              //@synthesize deletionDelegate=_deletionDelegate - In the implementation block
-(id)initInEditMode:(BOOL)arg1 ;
-(id)title;
-(UIEdgeInsets)separatorInset;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(id<HKEmergencyCardDeletionDelegate>)deletionDelegate;
-(void)setDeletionDelegate:(id<HKEmergencyCardDeletionDelegate>)arg1 ;
@end

