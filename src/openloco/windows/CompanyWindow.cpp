#include "../company.h"
#include "../interop/interop.hpp"
#include "../openloco.h"
#include "../ui/WindowManager.h"

using namespace openloco::interop;

namespace openloco::ui::windows::CompanyWindow
{
    void OpenUnk(company_id_t companyId)
    {
        registers regs;
        regs.eax = companyId;
        call(0x0043454F, regs);
    }

    void openFinances(company_id_t companyId)
    {
        registers regs;
        regs.eax = companyId;
        call(0x004345EE, regs);
    }
}
