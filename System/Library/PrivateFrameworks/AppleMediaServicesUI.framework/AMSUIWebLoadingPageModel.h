/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class NSString, AMSUIWebNavigationBarModel, AMSUIWebClientContext;

@interface AMSUIWebLoadingPageModel : NSObject <AMSUIWebPageProvider> {

	BOOL _disableDelay;
	NSString* _backgroundColor;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _message;
	AMSUIWebClientContext* _context;
	CGSize _windowSize;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL disableDelay;                                         //@synthesize disableDelay=_disableDelay - In the implementation block
@property (nonatomic,retain) NSString * message;                                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessage:(NSString *)arg1 ;
-(CGSize)windowSize;
-(NSString *)backgroundColor;
-(NSString *)message;
-(AMSUIWebClientContext *)context;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)createViewController;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
-(BOOL)disableDelay;
-(void)setDisableDelay:(BOOL)arg1 ;
@end

