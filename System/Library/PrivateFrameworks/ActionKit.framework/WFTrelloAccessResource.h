/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFAccountAccessResource.h>

@class WFWebAuthenticationSessionPresentationContext;

@interface WFTrelloAccessResource : WFAccountAccessResource {

	WFWebAuthenticationSessionPresentationContext* _presentationContext;

}

@property (nonatomic,retain) WFWebAuthenticationSessionPresentationContext * presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
-(WFWebAuthenticationSessionPresentationContext *)presentationContext;
-(void)setPresentationContext:(WFWebAuthenticationSessionPresentationContext *)arg1 ;
-(Class)accountClass;
-(id)associatedAppIdentifier;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)authorizationURLWithCallbackURL:(id)arg1 ;
@end

