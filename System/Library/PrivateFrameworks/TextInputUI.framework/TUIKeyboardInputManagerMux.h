/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIIVCResponseDelegateImpl, TIKeyboardInputManager;
@class NSMutableArray;

@interface TUIKeyboardInputManagerMux : NSObject {

	id<_UIIVCResponseDelegateImpl> _responseDelegate;
	id<TIKeyboardInputManager> _systemInputManager;
	NSMutableArray* _clients;

}

@property (nonatomic,retain) id<TIKeyboardInputManager> systemInputManager;                //@synthesize systemInputManager=_systemInputManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                                     //@synthesize clients=_clients - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemInputManager; 
@property (nonatomic,retain) id<_UIIVCResponseDelegateImpl> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
+(id)sharedInstance;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(NSMutableArray *)clients;
-(void)removeClient:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id<_UIIVCResponseDelegateImpl>)responseDelegate;
-(void)setClients:(NSMutableArray *)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegateImpl>)arg1 ;
-(BOOL)_systemHasKbd;
-(void)releaseConnectedClients;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)hasSystemInputManager;
-(void)setSystemInputManager:(id<TIKeyboardInputManager>)arg1 ;
-(void)updateClientResponseDelegatesWithDelegate:(id)arg1 ;
-(void)removeAllClients;
-(void)addClient:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<TIKeyboardInputManager>)systemInputManager;
-(void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(unsigned long long)arg2 implProxy:(id)arg3 ;
@end

