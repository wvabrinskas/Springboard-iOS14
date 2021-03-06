/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {

	NSMutableDictionary* _jsonDictionary;

}
+(BOOL)isPlaceholderSerializedRepresentation:(id)arg1 ;
+(id)placeholderFromSerializedRepresentation:(id)arg1 ;
+(id)dataForPlaceholder:(id)arg1 ;
+(void)cloneFileAtURL:(id)arg1 toPlaceholderURL:(id)arg2 ;
+(BOOL)writeData:(id)arg1 forURL:(id)arg2 ;
+(id)placeholderDirectory;
+(id)_placeholderMagic;
+(void)removePlaceholderForFileURL:(id)arg1 ;
+(id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2 ;
+(id)attachmentPlaceholderForFileURL:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 type:(id)arg4 contentID:(id)arg5 ;
+(BOOL)hasPlaceholderRepresentation:(id)arg1 ;
+(id)attachmentPlaceholderForData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4 ;
+(id)placeholderRepresentations:(id)arg1 ;
+(BOOL)setFileProtectionForFileAt:(id)arg1 error:(id*)arg2 ;
+(void)removePlaceholder:(id)arg1 ;
+(id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)placeholder;
-(id)contentID;
-(id)fileURL;
-(id)init;
-(id)serializedRepresentation;
-(id)fileName;
-(id)description;
-(id)fileURLString;
-(BOOL)useMailDrop;
-(void)_setJSONDictionary:(id)arg1 ;
-(void)setUseMailDrop:(BOOL)arg1 ;
-(void)setFileURLString:(id)arg1 ;
-(id)mimeType;
-(void)setFileName:(id)arg1 ;
-(unsigned long long)fileSize;
-(void)setMimeType:(id)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setContentID:(id)arg1 ;
@end

