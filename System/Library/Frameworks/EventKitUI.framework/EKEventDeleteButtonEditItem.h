/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EKEventEditItem.h>

@class UITableViewCell, UIView;

@interface EKEventDeleteButtonEditItem : EKEventEditItem {

	UITableViewCell* _cell;
	id _deleteButtonTarget;
	SEL _deleteButtonAction;

}

@property (nonatomic,readonly) UIView * sourceViewForPopover; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(UIView *)sourceViewForPopover;
-(void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end
