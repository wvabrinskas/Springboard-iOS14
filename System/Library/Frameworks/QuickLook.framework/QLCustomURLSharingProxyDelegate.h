/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSString;

@interface QLCustomURLSharingProxyDelegate : NSObject <UIDocumentInteractionControllerDelegate> {

	id<UIDocumentInteractionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIDocumentInteractionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIDocumentInteractionControllerDelegate>)delegate;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(void)setDelegate:(id<UIDocumentInteractionControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
