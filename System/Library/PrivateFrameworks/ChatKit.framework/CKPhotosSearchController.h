/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageTypeSearchController.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerConformingDelegate.h>

@class NSString;

@interface CKPhotosSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate> {

	unsigned long long _contentMode;

}

@property (assign,nonatomic) unsigned long long contentMode;              //@synthesize contentMode=_contentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sectionIdentifier;
+(Class)cellClass;
+(id)indexingString;
+(id)relativeDateFormatter;
+(BOOL)supportsQuicklookForResult:(id)arg1 ;
+(BOOL)supportsMacSelection;
+(id)sectionTitle;
+(id)reuseIdentifier;
-(void)setContentMode:(unsigned long long)arg1 ;
-(id)fetchAttributes;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3 ;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_additionalMenuElementsForResult:(id)arg1 ;
-(id)itemProviderForSearchResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(unsigned long long)contentMode;
-(id)initWithSectionIndex:(unsigned long long)arg1 ;
-(double)_internalInterGroupSpacing;
-(BOOL)wantsHeaderSection;
-(void)_filterControlTapped:(id)arg1 ;
-(void)saveAttachmentForResult:(id)arg1 ;
-(id)sectionSubtitle;
-(Class)headerOverrideClass;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(double)interGroupSpacing;
-(id)filterQueries;
@end

