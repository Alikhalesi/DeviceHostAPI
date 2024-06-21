#include <cstdint>
#define COMMAND_START_UPLOAD_SESSION 1
#define COMMAND_UPLOAD_DATA 2
#define COMMAND_END_UPLOAD_SESSION 3

#define DATA_SIZE 30

struct header
{
    uint8_t type_;
    uint8_t sessionId_;
};

struct StartUploadCommand
{
    struct header header_;
};

struct  UploadDataCommand
{
    struct header header_;
    uint8_t data[DATA_SIZE];
    
};

struct EndUploadCommand
{
    struct header header_;
};


