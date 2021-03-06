/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DHKey, NGMPublicPreKey;

@interface NGMFullPrekey : NSObject {

	DHKey* _dhKey;
	NGMPublicPreKey* _publicPrekey;

}

@property (nonatomic,readonly) DHKey * dhKey;                               //@synthesize dhKey=_dhKey - In the implementation block
@property (nonatomic,readonly) NGMPublicPreKey * publicPrekey;              //@synthesize publicPrekey=_publicPrekey - In the implementation block
-(id)initWithPBPrekey:(id)arg1 error:(id*)arg2 ;
-(BOOL)delete;
-(id)pbDevicePrekey;
-(NGMPublicPreKey *)publicPrekey;
-(id)description;
-(DHKey *)dhKey;
-(id)initWithPrekeySignedBy:(id)arg1 error:(id*)arg2 ;
@end

