/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class SLRequest, SUScriptAppleAccount, NSURL;

@interface SUScriptFacebookRequest : SUScriptObject {

	SLRequest* _request;
	long long _requestMethod;
	SUScriptAppleAccount* _scriptAccount;
	NSURL* _url;

}

@property (retain) SUScriptAppleAccount * account; 
@property (readonly) long long requestMethod; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) long long requestMethodDelete; 
@property (readonly) long long requestMethodGet; 
@property (readonly) long long requestMethodPost; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(SUScriptAppleAccount *)account;
-(void)setAccount:(SUScriptAppleAccount *)arg1 ;
-(void)setParameters:(id)arg1 ;
-(long long)requestMethod;
-(id)_className;
-(id)attributeKeys;
-(NSURL *)URL;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(long long)requestMethodGet;
-(long long)requestMethodPost;
-(long long)requestMethodDelete;
-(BOOL)_isRequestAllowed:(id*)arg1 ;
-(void)_performRequest:(id)arg1 withScriptFunction:(id)arg2 ;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(void)addParameterWithKey:(id)arg1 value:(id)arg2 ;
-(void)performRequestWithFunction:(id)arg1 ;
-(id)initWithURL:(id)arg1 requestMethod:(id)arg2 ;
@end

