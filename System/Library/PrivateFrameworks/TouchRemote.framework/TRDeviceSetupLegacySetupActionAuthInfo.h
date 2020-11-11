/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface TRDeviceSetupLegacySetupActionAuthInfo : NSObject {

	NSDictionary* _headers;
	NSDictionary* _body;

}

@property (nonatomic,readonly) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) NSDictionary * body;                 //@synthesize body=_body - In the implementation block
-(NSDictionary *)body;
-(NSDictionary *)headers;
-(id)initWithHeaders:(id)arg1 body:(id)arg2 ;
@end
