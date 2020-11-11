/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface DEDSeedingFilerToken : NSObject {

	NSNumber* _entityID;
	NSString* _token;
	NSString* _dsid;
	long long _submissionType;

}

@property (nonatomic,readonly) NSNumber * entityID;                   //@synthesize entityID=_entityID - In the implementation block
@property (nonatomic,readonly) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * dsid;                       //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) long long submissionType;              //@synthesize submissionType=_submissionType - In the implementation block
-(NSNumber *)entityID;
-(NSString *)dsid;
-(NSString *)token;
-(long long)submissionType;
-(id)initWithEntityID:(id)arg1 type:(long long)arg2 token:(id)arg3 dsid:(id)arg4 ;
-(id)compiledEntityID;
@end
