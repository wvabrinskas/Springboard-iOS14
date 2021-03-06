/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject {

	long long _version;
	NSURL* _messagesBundleURL;

}

@property (nonatomic,readonly) long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * messagesBundleURL;              //@synthesize messagesBundleURL=_messagesBundleURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)version;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)messagesBundleURL;
-(id)initWithCoder:(id)arg1 ;
@end

