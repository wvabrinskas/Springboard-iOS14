/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXHorizontalCollectionGadget.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface _PXSurveyQuestionsHorizontalCollectionGadget : PXHorizontalCollectionGadget <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(unsigned long long)headerStyle;
-(unsigned long long)accessoryButtonType;
-(/*^block*/id)accessoryButtonAction;
-(void)_hideAccessoryButtonAction;
-(void)_infoAccessoryButtonAction;
-(void)_hideSurveyQuestionsUntilDate:(id)arg1 ;
-(void)_sendRequestConsentFormMail;
-(id)accessoryButtonTitle;
@end

