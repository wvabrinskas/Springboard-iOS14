/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface ADIDRecord : NSObject {

	BOOL _dirty;
	NSString* _ID;
	NSData* _encryptedID;

}

@property (nonatomic,retain) NSData * encryptedID;              //@synthesize encryptedID=_encryptedID - In the implementation block
@property (nonatomic,retain) NSString * ID;                     //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) BOOL dirty;                        //@synthesize dirty=_dirty - In the implementation block
-(NSString *)ID;
-(BOOL)dirty;
-(id)initWithID:(id)arg1 ;
-(void)setID:(NSString *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(id)init;
-(void)setEncryptedID:(NSData *)arg1 ;
-(NSData *)encryptedID;
-(id)dictionaryRepresentation;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end

