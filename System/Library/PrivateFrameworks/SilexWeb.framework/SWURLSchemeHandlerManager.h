/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWURLSchemeHandlerManager.h>

@protocol SWURLSchemeHandlerManager <NSObject>
@required
-(void)registerFactory:(id)arg1 forScheme:(id)arg2;
-(void)registerFactory:(id)arg1 forScheme:(id)arg2;

@end


@protocol SWLogger;
@class WKWebViewConfiguration, NSMutableDictionary, NSMapTable, NSString;

@interface SWURLSchemeHandlerManager : NSObject <SWURLSchemeHandlerManager> {

	WKWebViewConfiguration* _configuration;
	id<SWLogger> _logger;
	NSMutableDictionary* _factories;
	NSMapTable* _handlers;

}

@property (nonatomic,readonly) WKWebViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * factories;                     //@synthesize factories=_factories - In the implementation block
@property (nonatomic,readonly) NSMapTable * handlers;                               //@synthesize handlers=_handlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMapTable *)handlers;
-(void)webView:(id)arg1 startURLSchemeTask:(id)arg2 ;
-(void)webView:(id)arg1 stopURLSchemeTask:(id)arg2 ;
-(WKWebViewConfiguration *)configuration;
-(id<SWLogger>)logger;
-(void)registerFactory:(id)arg1 forScheme:(id)arg2 ;
-(NSMutableDictionary *)factories;
-(id)initWithConfiguration:(id)arg1 logger:(id)arg2 ;
@end

