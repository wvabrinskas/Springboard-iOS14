/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLResourceIdentity.h>

@interface CPLResourceIdentityImplementation : CPLResourceIdentity
+(id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(void)setMMCImplementationForPlatform:(id)arg1 ;
+(id)_fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)zeroByteFileFingerPrint;
+(id)identityFromStoredIdentity:(id)arg1 ;
+(id)fileUTIForExtension:(id)arg1 ;
+(id)extensionForFileUTI:(id)arg1 ;
+(id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3 ;
+(id)identityForStorageName:(id)arg1 ;
-(id)identityForStorage;
@end

