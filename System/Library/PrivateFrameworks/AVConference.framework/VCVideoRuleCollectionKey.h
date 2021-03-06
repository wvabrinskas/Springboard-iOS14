/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCVideoRuleCollectionKey : NSObject <NSCopying> {

	unsigned char _transportType;
	unsigned char _encodingType;
	int _payload;

}

@property (nonatomic,readonly) int payload;                              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned char transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) unsigned char encodingType;               //@synthesize encodingType=_encodingType - In the implementation block
-(int)payload;
-(unsigned char)transportType;
-(unsigned long long)hash;
-(unsigned char)encodingType;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 ;
@end

