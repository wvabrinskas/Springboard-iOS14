/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider {

	UIDocumentInteractionController* _documentInteractionController;

}

@property (nonatomic,__weak,readonly) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
-(id)item;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2 ;
-(void)main;
-(id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg1 ;
-(id)loadedURL;
@end

