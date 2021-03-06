/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString;

@interface AMSRatingsProviderTask : AMSTask <AMSBagConsumer> {

	unsigned long long _mediaType;
	NSString* _storeFront;
	id<AMSBagProtocol> _bag;
	NSString* _clientIdentifier;

}

@property (nonatomic,readonly) unsigned long long mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * storeFront;                     //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createBagForSubProfile;
+(id)bagSubProfile;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
-(unsigned long long)mediaType;
-(id)cacheTitle;
-(id)_cachedRatingsData;
-(BOOL)_hasCachedData;
-(void)_clearCacheIfNeeded;
-(id)_urlForMediaType:(unsigned long long)arg1 ;
-(id)initWithMediaType:(unsigned long long)arg1 storeFront:(id)arg2 clientIdentifier:(id)arg3 bag:(id)arg4 ;
-(NSString *)clientIdentifier;
-(id<AMSBagProtocol>)bag;
-(id)performTask;
-(NSString *)storeFront;
-(id)_cachePath;
-(id)_cacheDirectory;
@end

