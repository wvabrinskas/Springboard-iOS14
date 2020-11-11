/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFMessageComposeViewControllerDelegate.h>

@class UIViewController, NSString;

@interface ILClassificationReportingController : NSObject <MFMessageComposeViewControllerDelegate> {

	UIViewController* _hostViewController;
	/*^block*/id _completion;

}

@property (nonatomic,__weak,readonly) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(UIViewController *)hostViewController;
-(id)initWithHostViewController:(id)arg1 ;
-(void)reportResponse:(id)arg1 forExtension:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)reportResponseViaNetwork:(id)arg1 forExtension:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)reportResponseViaSMS:(id)arg1 forExtension:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end
