/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/ShareSheet-Structs.h>
#import <ShareSheet/UIPrintActivity.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@class QLPreviewController, UICreatePDFActivityItem, NSString;

@interface UICreatePDFActivity : UIPrintActivity <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate> {

	QLPreviewController* _previewController;
	UICreatePDFActivityItem* _previewURLItem;

}

@property (nonatomic,retain) QLPreviewController * previewController;               //@synthesize previewController=_previewController - In the implementation block
@property (nonatomic,retain) UICreatePDFActivityItem * previewURLItem;              //@synthesize previewURLItem=_previewURLItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_xpcAttributes;
-(void)_cleanup;
-(id)activityType;
-(QLPreviewController *)previewController;
-(id)activityTitle;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(void)setPreviewController:(QLPreviewController *)arg1 ;
-(id)activityViewController;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(void)performActivity;
-(void)_setupQuickLookWithURL:(id)arg1 activityItems:(id)arg2 isPreview:(BOOL)arg3 ;
-(void)setPreviewURLItem:(UICreatePDFActivityItem *)arg1 ;
-(BOOL)previewController:(id)arg1 canEditItem:(id)arg2 ;
-(BOOL)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2 ;
-(id)excludedActivityTypesForPreviewController:(id)arg1 ;
-(BOOL)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1 ;
-(UICreatePDFActivityItem *)previewURLItem;
-(BOOL)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg1 ;
-(id)dismissActionsForPreviewController:(id)arg1 ;
-(id)_systemImageName;
@end

