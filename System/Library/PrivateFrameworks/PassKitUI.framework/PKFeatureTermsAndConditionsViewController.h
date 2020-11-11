/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPortraitNavigationController.h>
#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class RemoteUIController, QLItem, QLPreviewController, NSData, NSString;

@interface PKFeatureTermsAndConditionsViewController : PKPortraitNavigationController <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, RemoteUIControllerDelegate, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable> {

	BOOL _isIpad;
	RemoteUIController* _termsUIController;
	QLItem* _pdfItem;
	QLPreviewController* _previewController;
	NSData* _pdfData;
	NSData* _htmlData;
	BOOL _performedInitialLoad;
	BOOL _useModalPresentation;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _context;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL useModalPresentation;                                                  //@synthesize useModalPresentation=_useModalPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayTitle;
-(void)presentWithNavigationController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)dismissViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadHTML;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)_pk_dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadHTMLViewController;
-(void)popViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_showTermsSpinner:(BOOL)arg1 objectModel:(id)arg2 ;
-(void)_handleWalletTermsLink:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_loadPDFViewControllerWithFileName:(id)arg1 ;
-(BOOL)useModalPresentation;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 ;
-(void)htmlTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)initalTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)pdfTermsDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)termsShown;
-(void)termsAccepted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorAlert;
-(long long)context;
-(id)provideDataForItem:(id)arg1 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setUseModalPresentation:(BOOL)arg1 ;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)_loadPDF;
-(void)setContext:(long long)arg1 ;
@end
