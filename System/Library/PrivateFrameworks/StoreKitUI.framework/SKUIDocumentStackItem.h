/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IKAppDocument, SKUINavigationDocumentController, NSDictionary, UIViewController, UIPopoverPresentationController, NSString;

@interface SKUIDocumentStackItem : NSObject {

	IKAppDocument* _document;
	SKUINavigationDocumentController* _navigationDocumentController;
	NSDictionary* _presentationOptions;
	BOOL _usesNavigationControllerForModalPresentation;
	UIViewController* _viewController;
	UIPopoverPresentationController* _popoverPresentationController;

}

@property (nonatomic,readonly) IKAppDocument * document;                                                   //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSDictionary * presentationOptions;                                         //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (assign,nonatomic) BOOL usesNavigationControllerForModalPresentation;                            //@synthesize usesNavigationControllerForModalPresentation=_usesNavigationControllerForModalPresentation - In the implementation block
@property (nonatomic,retain) SKUINavigationDocumentController * navigationDocumentController;              //@synthesize navigationDocumentController=_navigationDocumentController - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                            //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIPopoverPresentationController * popoverPresentationController;              //@synthesize popoverPresentationController=_popoverPresentationController - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) NSString * presentationType; 
@property (nonatomic,readonly) NSString * sheetType; 
@property (nonatomic,readonly) NSString * overlayType; 
@property (nonatomic,readonly) NSString * sourceElementIdentifier; 
-(BOOL)isAnimated;
-(id)init;
-(void)setViewController:(UIViewController *)arg1 ;
-(NSString *)overlayType;
-(UIViewController *)viewController;
-(IKAppDocument *)document;
-(NSString *)sheetType;
-(NSString *)presentationType;
-(UIPopoverPresentationController *)popoverPresentationController;
-(NSDictionary *)presentationOptions;
-(void)setNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
-(void)_setDocument:(id)arg1 ;
-(NSString *)sourceElementIdentifier;
-(SKUINavigationDocumentController *)navigationDocumentController;
-(BOOL)usesNavigationControllerForModalPresentation;
-(void)setUsesNavigationControllerForModalPresentation:(BOOL)arg1 ;
-(void)setPopoverPresentationController:(UIPopoverPresentationController *)arg1 ;
@end

