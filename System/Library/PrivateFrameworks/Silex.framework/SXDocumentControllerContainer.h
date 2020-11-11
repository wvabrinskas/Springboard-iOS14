/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXDocumentControllerContainer.h>

@protocol SXDocumentControllerContainer <SXDocumentControllerProvider>
@required
-(void)registerDocumentController:(id)arg1;

@end


@class SXDocumentController, NSString;

@interface SXDocumentControllerContainer : NSObject <SXDocumentControllerContainer> {

	SXDocumentController* _documentController;

}

@property (nonatomic,readonly) SXDocumentController * documentController;              //@synthesize documentController=_documentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXDocumentController *)documentController;
-(void)registerDocumentController:(id)arg1 ;
@end
