/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueAudioQueue* OpaqueAudioQueueRef;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct _compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char> > {
	char* __begin_;
	char* __end_;
	compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > __end_cap_;
} vector<unsigned char, std::__1::allocator<unsigned char> >;

typedef struct _compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> > {
	Marker __value_;
} compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> >;

typedef struct vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> > {
	Marker __begin_;
	Marker __end_;
	compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> > __end_cap_;
} vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> >;

typedef struct _compressed_pair<TTSSynthesizer *, std::__1::default_delete<TTSSynthesizer> > {
	TTSSynthesizer __value_;
} compressed_pair<TTSSynthesizer *, std::__1::default_delete<TTSSynthesizer> >;

typedef struct unique_ptr<TTSSynthesizer, std::__1::default_delete<TTSSynthesizer> > {
	compressed_pair<TTSSynthesizer *, std::__1::default_delete<TTSSynthesizer> > __ptr_;
} unique_ptr<TTSSynthesizer, std::__1::default_delete<TTSSynthesizer> >;
