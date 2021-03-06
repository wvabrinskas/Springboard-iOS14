/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WFCompactThumbnailViewController.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class WFFileType, NSString;

@interface WFCompactFileThumbnailViewController : WFCompactThumbnailViewController <UIPointerInteractionDelegate> {

	WFFileType* _fileType;
	NSString* _filename;

}

@property (nonatomic,readonly) WFFileType * fileType;               //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,readonly) NSString * filename;                 //@synthesize filename=_filename - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)filename;
-(WFFileType *)fileType;
-(void)loadView;
-(double)contentHeightForWidth:(double)arg1 ;
-(id)initWithFileType:(id)arg1 filename:(id)arg2 ;
@end

