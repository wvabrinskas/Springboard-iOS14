/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString;

@interface MFAttachmentRaw : NSObject {

	NSData* _data;
	NSString* _fileName;
	NSString* _mimeType;
	NSString* _contentID;

}

@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * contentID;               //@synthesize contentID=_contentID - In the implementation block
+(id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 ;
-(NSString *)contentID;
-(void)setData:(NSData *)arg1 ;
-(NSString *)fileName;
-(NSData *)data;
-(NSString *)mimeType;
-(void)setFileName:(NSString *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
@end
