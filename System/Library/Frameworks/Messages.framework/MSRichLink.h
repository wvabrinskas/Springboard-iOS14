/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Messages.framework/Messages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata, NSURL;

@interface MSRichLink : NSObject <NSCopying, NSSecureCoding> {

	LPLinkMetadata* _linkMetadata;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * _linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(id)init;
-(LPLinkMetadata *)_linkMetadata;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)set_linkMetadata:(LPLinkMetadata *)arg1 ;
@end

