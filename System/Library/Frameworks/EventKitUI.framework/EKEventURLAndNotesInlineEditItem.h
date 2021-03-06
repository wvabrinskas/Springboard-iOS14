/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EKEventEditItem.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class EKEventURLInlineEditItem, EKEventNotesInlineEditItem, NSString;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {

	EKEventURLInlineEditItem* _urlEditItem;
	EKEventNotesInlineEditItem* _notesEditItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)numberOfSubitems;
-(void)setDelegate:(id)arg1 ;
-(void)reset;
-(void)tableViewDidScroll;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(BOOL)isInline;
-(void)setSelectedResponder:(id)arg1 ;
-(void)_contentSizeCategoryChanged;
-(id)searchStringForEventAutocomplete;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)isSaveable;
-(void)dealloc;
@end

