/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNUINavigationListStyle;
@interface CNUINavigationListStyleApplier : NSObject {

	id<CNUINavigationListStyle> _navigationListStyle;

}

@property (nonatomic,readonly) id<CNUINavigationListStyle> navigationListStyle;              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
-(id)initWithNavigationListStyle:(id)arg1 ;
-(void)applyNavigationListStyleToCell:(id)arg1 ;
-(void)applyNavigationListStyleToDetailCell:(id)arg1 ;
-(void)applyExpandedBackgroundNavigationListStyleToCell:(id)arg1 ;
-(void)applyCollapsedBackgroundNavigationListStyleToCell:(id)arg1 ;
-(id<CNUINavigationListStyle>)navigationListStyle;
@end
