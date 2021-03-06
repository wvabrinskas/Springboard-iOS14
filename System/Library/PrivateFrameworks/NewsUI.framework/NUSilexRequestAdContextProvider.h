/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class SXAdRequest, NSString;

@interface NUSilexRequestAdContextProvider : NSObject <NUAdContextProvider> {

	SXAdRequest* _request;

}

@property (nonatomic,readonly) SXAdRequest * request;               //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXAdRequest *)request;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)contextProvidersForKeyPath:(id)arg1 ;
-(id)initWithAdRequest:(id)arg1 ;
-(id)creativeTypeFromBannerType:(unsigned long long)arg1 ;
@end

